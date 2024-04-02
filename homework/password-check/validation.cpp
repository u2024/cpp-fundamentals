#include "validation.hpp"
#include <cctype>

enum ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};

auto getErrorMessage(ErrorCode result)
{
    switch (result)
    {
    case 0:
    {
        return "Ok";
        break;
    }
    case 1:
    {
        return "Password needs at least nine characters";
        break;
    }
    case 2:
    {
        return "Password needs at least one number";
        break;
    }
    case 3:
    {
        return "Password needs at least one special character";
        break;
    }
    case 4:
    {
        return "Password needs at least one uppercase letter";
        break;
    }
    case 5:
    {
        return "Passwords do not match";
        break;
    }
    default:
        return "IDK";
        break;
    }
}

bool doPasswordsMatch(std::string password_1, std::string password_2)
{
    if(password_1==password_2)
    {
        return true;
    }
    else return false;
}

auto checkPasswordRules(std::string password)
{
    bool a=false, b=false, c=false;
    if(password.size()<9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    for(int i=0;i<password.size();++i)
    {
        if(isupper(password[i]))
        {
            a=true;
        }
        if(!isalnum(password[i]))
        {
            b=true;
        }
        if(isdigit(password[i]))
        {
            c=true;
        }
    }
    if(!a)
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if(!b)
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if(!c)
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    return ErrorCode::Ok;
}

auto checkPassword(std::string password_1, std::string password_2)
{
    if(doPasswordsMatch(password_1, password_2))
    {
        return checkPasswordRules(password_1);
    }
    else return ErrorCode::PasswordsDoNotMatch;
}

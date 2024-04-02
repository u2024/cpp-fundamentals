#pragma once
enum ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};
stdin getErrorMessage(ErrorCode result);
bool doPasswordsMatch(std::string password_1, std::string password_2);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password_1, std::string password_2);

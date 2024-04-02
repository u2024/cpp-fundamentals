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
auto getErrorMessage(ErrorCode result);
bool doPasswordsMatch(std::string password_1, std::string password_2);
auto checkPasswordRules(std::string password);
auto checkPassword(std::string password_1, std::string password_2);

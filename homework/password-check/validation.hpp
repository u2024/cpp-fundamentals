#pragma once

enum ErrorCode;
auto getErrorMessage(ErrorCode result);
bool doPasswordsMatch(std::string password_1, std::string password_2);
auto checkPasswordRules(std::string password);
auto checkPassword(std::string password_1, std::string password_2);

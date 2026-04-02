// Samiya_Saher_1_Q3c.cpp
// Exercise 3-c: Corrected Program
//
// Original (broken) code had the following errors:
//   1. "#include < istream>" - wrong header (should be <iostream>) and had a space
//   2. "#include <print >" - non-standard / wrong header; removed (not needed)
//   3. "Int main" - 'Int' should be lowercase 'int'
//   4. Missing parentheses in "int main" (should be "int main()")
//   5. "std:printn" - wrong namespace separator (::) and wrong function name;
//      should be "std::cout"
//   6. Closing brace was ')' instead of '}'
//
// All errors have been corrected below.

#include <iostream>

int main() {
    std::cout << "Ciao Mondo!" << std::endl;
    return 0;
}

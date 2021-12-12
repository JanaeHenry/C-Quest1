
// It returns 1 if the character sent as argument is a letter (A to Z or a to z). It returns 0 otherwise.

int my_isalpha(char param_1)
{
 if( (param_1>='a' && param_1<='z') || (param_1>='A' && param_1<='Z'))
        return 1;
    else
        return 0;


}
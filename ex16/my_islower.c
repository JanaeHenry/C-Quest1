
//It returns 1 if the character sent as argument is a lower letter (a to z). It returns 0 otherwise.

int my_islower(char param_1)
{
if(param_1>='a' && param_1<='z')
return 1;
//if(param_1>='A' && param_1<='Z')
else
return 0;
}
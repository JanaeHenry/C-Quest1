
// It returns 1 if the character sent as argument is a space (man isspace). It returns 0 otherwise.

int my_isspace(char param_1)
{
//param_1 = {' ', '\t', '\n', '\v', '\f', '\r'};
if(param_1 == 0x20 && 0x09 && 0x0a && 0x0b && 0x0c && 0x0d)
return 1;
else
return 0;
}
void strcpy(char *s, char *t);
int main()
{
    char *s="asfsa";
    char *t[1];
    strcpy(t,s);
    printf("%s",t);
}

void strcpy(char *s, char *t)
{
    while(*s++=*t++)
        ;
}

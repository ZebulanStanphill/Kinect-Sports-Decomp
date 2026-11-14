typedef void (*PrintFunc_82D00D38)(const char *text, void *arg);

void fn_82D00D38(void *self, const void **trace, int count, PrintFunc_82D00D38 print, void *arg)
{
    print("No stack trace available", arg);
}

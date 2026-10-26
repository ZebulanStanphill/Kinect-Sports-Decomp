// CRT exception-handling hooks: sets __pInconsistency (the function terminate-on-inconsistency
// calls) to terminate().

void terminate();

extern "C" void (*__pInconsistency)();

extern "C" void fn_82F81310(void)
{
    __pInconsistency = terminate;
}

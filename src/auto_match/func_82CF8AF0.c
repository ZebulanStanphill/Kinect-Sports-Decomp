extern void fn_82CEDE90(void *os, const char *fmt, ...);

void fn_82CF8AF0(void *self, void *os)
{
    fn_82CEDE90(os, "printStatistics is not supported on hkFreeListAllocator - use hkDebugMemory or hkPoolMemory\n");
}

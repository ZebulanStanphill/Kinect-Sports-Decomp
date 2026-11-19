extern float lbl_820143E0; /* 1.0f / 1024 */
extern float lbl_82090FC8; /* 1.0f / (1024 * 1024) */

extern int fn_82D04B90(char *buffer, const char *format, ...);

void fn_82CFF798(int bytes, char *buffer)
{
    if (bytes < 0x400) {
        fn_82D04B90(buffer, "%i Bytes", bytes);
        return;
    }
    if (bytes < 0x2800) {
        fn_82D04B90(buffer, "%.1f Kb", (float)bytes * lbl_820143E0);
        return;
    }
    if (bytes < 0x100000) {
        fn_82D04B90(buffer, "%i Kb", bytes / 1024);
        return;
    }
    fn_82D04B90(buffer, "%.2f Mb", (float)bytes * lbl_82090FC8);
}

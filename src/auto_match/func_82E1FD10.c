extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);
extern int fn_82F664B0(char *, unsigned int, const char *);
extern int fn_82F64988(unsigned short *, unsigned int, const unsigned short *);
extern int fn_82A26568(int, const char *, void *, int, unsigned int *, int, int);
extern int fn_82A264C8(const char *, int);
extern int fn_82E1FB68(void *, const char *);

typedef struct Content_82E1FD10 {
    int device;
    int type;
    unsigned short displayName[128];
    char fileName[42];
} Content_82E1FD10;

int fn_82E1FD10(void *self, int user)
{
    Content_82E1FD10 content = {0};
    unsigned int disposition;
    char path[26];
    int result;

    fn_82F664B0(content.fileName, 42, "VinceGameTimer.dat");
    fn_82F64988(content.displayName, 128, (const unsigned short *)L"VinceGameTimer");
    {
        Content_82E1FD10 *info = &content;
        info->type = 1;
        info->device = 1;
        disposition = 0;
    }
    result = fn_82A26568(user, "Vince", &content, 2, &disposition, 0, 0);
    if (disposition != 1 && disposition != 2) {
        fn_82A264C8("Vince", 0);
        return result;
    }
    *(struct Path_82E1FD10 { char bytes[26]; } *)path =
        *(const struct Path_82E1FD10 *)"Vince:\\VinceGameTimer.dat";
    result = fn_82E1FB68(self, path);
    fn_82A264C8("Vince", 0);
    return result;
}

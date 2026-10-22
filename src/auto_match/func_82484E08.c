typedef struct {
    unsigned char pad[0x34];
    char names[4][0x100];
} obj_82484E08;

typedef struct {
    int a;
    int b;
    int pad[5];
    int c;
    int d;
    int e;
    int f;
} cfg_82484E08;

extern char lbl_821BD808[];
extern cfg_82484E08 *fn_8225F160(void);

static void copy_name(char *dst, const char *src, int size)
{
    char *end = dst + size;
    char c;
    do {
        if (dst >= end) break;
        c = *src++;
        *dst++ = c;
    } while (c != '\0');
    if (dst == end) {
        dst[-1] = '\0';
    }
}

void fn_82484E08(obj_82484E08 *param_1)
{
    cfg_82484E08 *cfg;

    param_1->names[1][0] = '\0';
    param_1->names[2][0] = '\0';
    copy_name(param_1->names[0], "partymode", 0x100);
    copy_name(param_1->names[3], lbl_821BD808, 0x100);
    cfg = fn_8225F160();
    cfg->c = 0;
    cfg->a = 1;
    cfg->d = 0;
    cfg->e = 0;
    cfg->f = 4;
    fn_8225F160()->b = 5;
}

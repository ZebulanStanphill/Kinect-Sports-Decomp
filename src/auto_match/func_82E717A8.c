typedef struct {
    char pad[0x72];
    unsigned short id;
} Self_82E717A8;

extern int fn_82E71510(Self_82E717A8 *self, void *key);
extern int fn_82E71308(Self_82E717A8 *self, void *key, int mask, unsigned __int64 *out, int a, int b);
extern void fn_82E6FC00(Self_82E717A8 *self, unsigned __int64 v, unsigned short id);

void fn_82E717A8(Self_82E717A8 *self, void *key)
{
unsigned short id; unsigned __int64 v; if (fn_82E71510(self, key) >= 0) { id = self->id; v = 0; if (fn_82E71308(self, key, 0xff, &v, 0, 0) >= 0) fn_82E6FC00(self, v, id); }
}

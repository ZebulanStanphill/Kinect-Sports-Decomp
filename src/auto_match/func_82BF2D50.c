typedef struct Obj_82BF2D50 {
    unsigned char pad[0x14];
    int handle;
} Obj_82BF2D50;

extern int fn_82BF2B20(int *handle);
extern int fn_82CE08D0(int handle);

int fn_82BF2D50(Obj_82BF2D50 *obj)
{
    int *handle = &obj->handle;
    int result;

    if (*handle != -1) {
        result = fn_82CE08D0(*handle);
        *handle = -1;
        if (result == -1 && fn_82BF2B20(handle) != 0) {
            return 0;
        }
        return 1;
    }
    *handle = -1;
    return 0;
}

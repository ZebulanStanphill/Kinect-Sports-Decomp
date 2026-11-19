extern int *_errno(void);
extern unsigned long *fn_82F68278(void);
extern __int64 fn_82F855A8(int handle, __int64 offset, int origin);
extern void *fn_82A2A360(void);
extern void *fn_82A28568(void *heap, unsigned int flags, unsigned int size);
extern int fn_82A28E60(void *heap, unsigned int flags, void *memory);
extern int fn_82F88588(int handle, int mode);
extern int fn_82F7C758(int handle, const void *buffer, unsigned int count);
extern void *fn_82F85D70(int handle);
extern int fn_82A29CD8(void *osHandle);
extern unsigned long fn_82A1F470(void);

int fn_82F883F0(int handle, __int64 size)
{
    __int64 position;
    __int64 end;
    __int64 remaining;
    void *buffer;
    int oldMode;
    int written;
    int count;
    __int64 result;

    result = 0;
    position = fn_82F855A8(handle, 0, 1);
    if (position == -1) {
        goto fail;
    }
    end = fn_82F855A8(handle, 0, 2);
    if (end == -1) {
        goto fail;
    }
    remaining = size - end;
    if (remaining > 0) {
        buffer = fn_82A28568(fn_82A2A360(), 8, 0x1000);
        if (buffer == 0) {
            *_errno() = 12;
            return *_errno();
        }
        oldMode = fn_82F88588(handle, 0x8000);
        do {
            count = remaining >= 0x1000 ? 0x1000 : (int)remaining;
            written = fn_82F7C758(handle, buffer, count);
            if (written == -1) {
                if (*fn_82F68278() == 5) {
                    *_errno() = 13;
                }
                result = -1;
                break;
            }
            remaining -= written;
        } while (remaining > 0);
        fn_82F88588(handle, oldMode);
        fn_82A28E60(fn_82A2A360(), 0, buffer);
    } else if (remaining < 0) {
        if (fn_82F855A8(handle, size, 0) == -1) {
            goto fail;
        }
        result = fn_82A29CD8(fn_82F85D70(handle)) ? 0 : -1;
        if (result == -1) {
            *_errno() = 13;
            *fn_82F68278() = fn_82A1F470();
        }
    }
    if (result == -1) {
        goto fail;
    }
    if (fn_82F855A8(handle, position, 0) != -1) {
        return 0;
    }

fail:
    return *_errno();
}

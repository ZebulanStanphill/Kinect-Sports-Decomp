typedef struct Cmd_82631578 {
    unsigned int top : 1;
    unsigned int flag : 1;
    unsigned int addr : 30;
    unsigned int value;
} Cmd_82631578;

typedef struct Blob_82631578 {
    char pad[0x14];
    unsigned int offset;
} Blob_82631578;

typedef struct Shader_82631578 {
    unsigned int mask;
    int a;
    unsigned int fence;
    char pad0c[0x28 - 0xc];
    Blob_82631578 blob;
} Shader_82631578;

typedef struct Header_82631578 {
    unsigned __int64 clear;
    unsigned __int64 extra;
    unsigned int size;
    unsigned int data[1];
} Header_82631578;

typedef struct Device_82631578 {
    char pad[0x8];
    unsigned __int64 dirty8;
    unsigned __int64 dirty10;
    char pad18[0x20 - 0x18];
    unsigned __int64 dirty20;
    char pad28[0x480 - 0x28];
    char regs[0x2a9c - 0x480];
    unsigned int fence;
    unsigned int mask;
    char pad2aa4[0x3244 - 0x2aa4];
    Shader_82631578 *shader;
    char pad3248[0x35a8 - 0x3248];
    Cmd_82631578 *cmd;
    Cmd_82631578 *cmdEnd;
} Device_82631578;

extern Cmd_82631578 *fn_8264B4A0(Device_82631578 *dev);
void *memcpy(void *dst, const void *src, unsigned int n);

static __forceinline void orq_82631578(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82631578(Device_82631578 *param_1, Shader_82631578 *param_2)
{
    Shader_82631578 *old = param_1->shader;

    if (old != 0) {
        if (param_1->fence != 0) {
            old->fence = param_1->fence;
        } else if ((param_1->mask & old->mask) != 0) {
            Cmd_82631578 cmd;
            Cmd_82631578 *p = param_1->cmd;
            if (p >= param_1->cmdEnd) {
                p = fn_8264B4A0(param_1);
            }
            cmd.addr = (unsigned int)old >> 2;
            cmd.value = 0xffffffff;
            cmd.flag = 0;
            *p = cmd;
            param_1->cmd = p + 1;
        }
    }
    param_1->shader = param_2;
    orq_82631578(&param_1->dirty10, 0x100000);
    orq_82631578(&param_1->dirty10, 0x20000);
    if (param_2 != 0) {
        Blob_82631578 *blob = &param_2->blob;
        if (blob->offset != 0) {
        Header_82631578 *h = (Header_82631578 *)((char *)blob + blob->offset);
        char *regs;
        unsigned int *rec;
        unsigned int *end;
        unsigned short count;
        unsigned short off;

        param_1->dirty8 &= ~h->clear;
        if (h->extra != 0) {
            param_1->dirty20 |= 0x100000000000000;
        }
        rec = h->data;
        regs = param_1->regs;
        end = (unsigned int *)((char *)rec + h->size);
        while (rec < end) {
            count = ((unsigned short *)rec)[1];
            rec++;
            if (count == 0) {
                break;
            }
            rec++;
        }
        while (rec < end) {
            count = ((unsigned short *)rec)[1];
            off = ((unsigned short *)rec)[0];
            rec++;
            if (count == 0) {
                break;
            }
            memcpy(regs + off, rec, count * 4);
            rec += count;
        }
        while (rec < end) {
            unsigned int *dst;
            count = ((unsigned short *)rec)[1];
            off = ((unsigned short *)rec)[0];
            rec++;
            if (count == 0) {
                break;
            }
            dst = (unsigned int *)(regs + off);
            do {
                *dst = (*dst & rec[0]) | rec[1];
                dst++;
                rec += 2;
                count -= 2;
            } while (count != 0);
        }
    }
    }
}

typedef struct Ctx_826A83A8 { char pad[0x11c]; unsigned int id; } Ctx_826A83A8;
typedef struct Info_826A83A8 { char pad[0x2a4]; unsigned char mode; } Info_826A83A8;
typedef struct Self_826A83A8 { char pad[0x20]; Info_826A83A8 *info; } Self_826A83A8;
typedef struct Value_826A83A8 { unsigned char type; char pad[3]; unsigned char b; } Value_826A83A8;
extern void fn_826959C8(Value_826A83A8 *v);
extern unsigned char fn_826C0330(Self_826A83A8 *self, Ctx_826A83A8 **ctx, unsigned int *id, Value_826A83A8 *out);

static __forceinline void SetBool(Value_826A83A8 *v, unsigned char b) { fn_826959C8(v); v->type = 2; v->b = b; }
static __forceinline void SetNone(Value_826A83A8 *v) { fn_826959C8(v); v->type = 0; }
unsigned char fn_826A83A8(Self_826A83A8 *self, Ctx_826A83A8 **ctx, unsigned int *id, Value_826A83A8 *out)
{
    if (*id == (*ctx)->id) {
        if (self->info->mode != 0) {
            SetBool(out, self->info->mode == 1);
            return 1;
        }
        SetNone(out);
        return 0;
    }
    return fn_826C0330(self, ctx, id, out);
}

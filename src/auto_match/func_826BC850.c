typedef struct Frame_826BC850 { char pad[0xc]; int result; } Frame_826BC850;
typedef struct Env_826BC850 { int pad[2]; Frame_826BC850 *frame; } Env_826BC850;
typedef struct Ctx_826BC850 Ctx_826BC850;

extern void fn_826B55A0(Env_826BC850 *env, Ctx_826BC850 *c, int start, int len, int a, int b, int d);

void fn_826BC850(Env_826BC850 *env, Ctx_826BC850 *c)
{
    fn_826B55A0(env, c, 0, env->frame->result, 0, 0, 0);
}

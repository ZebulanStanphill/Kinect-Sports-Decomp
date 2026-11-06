typedef struct Args_82789DC8 {
    float x;
    float y;
    unsigned int color;
} Args_82789DC8;

typedef struct Vec2_82789DC8 {
    float x;
    float y;
} Vec2_82789DC8;

extern void fn_82789C08(int param_1, Args_82789DC8 *args);

void fn_82789DC8(int param_1, Vec2_82789DC8 *param_2)
{
    Args_82789DC8 args;

    args.x = param_2->x;
    args.y = param_2->y;
    args.color = 0x80ffffff;
    fn_82789C08(param_1, &args);
}

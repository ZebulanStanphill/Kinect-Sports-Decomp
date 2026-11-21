// A script native: looks up the target object of type 0x20, creates a display object for it
// through the movie's factory, applies the optional first two arguments, two values read from
// the object, and attaches the result.

class Object_8275BB90
{
  public:
    virtual void vf00();
    virtual void vf04();
    virtual int GetType(); /* 0x08 */
};

class Display_8275BB90
{
  public:
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void SetVisible(int visible); /* 0x10 */
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void Setup(int count, float value, float zero); /* 0x20 */
    virtual void vf24();
    virtual void SetFirst(float value); /* 0x28 */
    virtual void vf2C();
    virtual void SetSecond(float value); /* 0x30 */
};

class Factory_8275BB90
{
  public:
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual Display_8275BB90 *Create(int id, int flags); /* 0x14 */
};

struct Target_8275BB90 {
    char pad00[0x30];
    int id;    /* 0x30 */
    int state; /* 0x34 */
};

struct Args_8275BB90 {
    int pad00;
    int result;              /* 0x04 */
    Object_8275BB90 *target; /* 0x08 */
    int pad0c[3];
    int env;   /* 0x18 */
    int count; /* 0x1c */
};

extern "C" char *fn_826A7398(int env);
extern "C" Factory_8275BB90 *fn_8274A8E0(char *movie);
extern "C" void *fn_8275BB38(Target_8275BB90 *target);
extern "C" int fn_826957D0(Args_8275BB90 *args, int index);
extern "C" int fn_82697610(int value, int env);
extern "C" unsigned char fn_826C68B8(void *owner, Target_8275BB90 *target);
extern "C" float fn_826C52C8(void *owner);
extern "C" float fn_826C53D0(void *owner);
extern "C" void fn_826D06C8(void *owner, Display_8275BB90 *display, Target_8275BB90 *target, int state);
extern "C" void fn_8267C4F0(Display_8275BB90 *display);

extern "C" void fn_8275BB90(Args_8275BB90 *args)
{
    char *movie;
    Factory_8275BB90 *factory;
    Target_8275BB90 *target;
    void *owner;
    Display_8275BB90 *display;
    int first;
    int second;

    movie = fn_826A7398(args->env);
    if (movie == 0) {
        return;
    }
    factory = fn_8274A8E0(movie + 8);
    if (factory == 0) {
        return;
    }
    if (args->target == 0 || args->target->GetType() != 0x20) {
        return;
    }
    target = args->target != 0 ? (Target_8275BB90 *)((char *)args->target - 0x10) : 0;
    if (target == 0) {
        return;
    }
    owner = fn_8275BB38(target);
    if (owner == 0) {
        return;
    }
    first = 0;
    if (args->count > 0) {
        first = fn_82697610(fn_826957D0(args, 0), args->env);
    }
    if (args->count <= 1 || (second = fn_82697610(fn_826957D0(args, 1), args->env)) == 0) {
        second = 1;
    }
    if (target->state == 0 && fn_826C68B8(owner, target) != 0) {
        return;
    }
    display = factory->Create(target->id, 1);
    if (display == 0) {
        return;
    }
    if (first > 0 || second > 0) {
        display->Setup(second, (float)first, 0.0f);
    }
    display->SetFirst(fn_826C52C8(owner));
    display->SetSecond(fn_826C53D0(owner));
    display->SetVisible(0);
    fn_826D06C8(owner, display, target, target->state);
    fn_8267C4F0(display);
}

extern "C" {void fn_82CE4118(void *);void fn_82DF3FA8(void *);}
struct Body_82DF4010 {int pad[2];void *world;};
struct Projectile_82DF4010 {char pad[16]; Body_82DF4010 *body; bool isInWorld() const {return body && body->world;} };
extern "C" void fn_82DF4568(Projectile_82DF4010 *p) { if(p->body) {if(p->isInWorld()) fn_82DF3FA8(p);fn_82CE4118(p->body);p->body=0;}}

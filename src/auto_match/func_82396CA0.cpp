#include <new>
#include <string>

namespace R1
{
namespace Soundscape
{
class AudioVariant_c
{
  public:
    AudioVariant_c(const char *name);
    virtual ~AudioVariant_c();
    std::string m_name;
    unsigned int m_id;
};
} // namespace Soundscape
} // namespace R1

using R1::Soundscape::AudioVariant_c;

struct Entity_82396CA0 {
    char padding[0x28];
    int sound;
};

struct Slot_82396CA0 {
    Entity_82396CA0 *entity;
    int reserved;
};

struct List_82396CA0 {
    Slot_82396CA0 *begin;
    Slot_82396CA0 *end;
};

struct Object_82396CA0 {
    char padding[0xa8];
    List_82396CA0 *list;
    char paddingac[0x224];
    int active;
    char padding2d4[0x594];
    float timer;
};

extern "C" {
unsigned int fn_828647D8(const AudioVariant_c *name);
void fn_82536590(unsigned int *id, int flags);
void fn_824C97F0(int sound, const char *event);
}

extern "C" void fn_82396CA0(Object_82396CA0 *self)
{
    if (self->active != 0) {
        unsigned int id;
        {
            char storage[0x30];
            id = fn_828647D8(new (storage) AudioVariant_c("Game_Control_tabletennis_zone_off"));
            ((AudioVariant_c *)storage)->AudioVariant_c::~AudioVariant_c();
        }
        fn_82536590(&id, 0);
        self->active = 0;
        self->timer = 0.0f;
        Slot_82396CA0 *end = self->list->end;
        for (Slot_82396CA0 *slot = self->list->begin; slot != end; slot++) {
            fn_824C97F0(slot->entity->sound, "WakeUp");
        }
    }
}

// A moving average over a time window: samples older than the window are
// erased from the front of a std::vector (VC10 <vector>).
#include <vector>

struct Sample_824DC998 {
    float time;
    float value;
};

struct Average_824DC998 {
    std::vector<Sample_824DC998> samples;
    float sum;
    float average;
    float window;
    float time;
};

extern "C" void fn_824DC998(Average_824DC998 *self, float dt)
{
    self->time += dt;
    std::vector<Sample_824DC998>::iterator it = self->samples.begin();
    while (it != self->samples.end() && self->time - it->time >= self->window) {
        self->sum -= it->value;
        it = self->samples.erase(it);
    }
    self->average = self->sum / self->samples.size();
}

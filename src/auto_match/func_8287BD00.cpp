namespace R1 {
namespace Soundscape {
class EmitterObserver_i {
public:
    virtual ~EmitterObserver_i() {}
};

class EmitterObserver_c : public EmitterObserver_i {
public:
    EmitterObserver_c();
    virtual ~EmitterObserver_c() {}
};

EmitterObserver_c::EmitterObserver_c()
{
}
}
}

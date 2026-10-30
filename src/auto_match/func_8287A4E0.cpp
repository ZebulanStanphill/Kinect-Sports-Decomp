namespace R1 {
namespace Soundscape {
namespace Maths {
class Spring_i {
public:
    virtual ~Spring_i() {}
};

class mathSpringBase_c : public Spring_i {
public:
    mathSpringBase_c();
    virtual ~mathSpringBase_c();
};

class mathSpring_c : public mathSpringBase_c {
public:
    mathSpring_c();
    virtual ~mathSpring_c() {}
};

mathSpring_c::mathSpring_c()
{
}
}
}
}

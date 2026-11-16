extern float fn_82809CB0(float value);
extern int fn_827EC748(float, float, float, float, float, float);

int fn_827ECDC0(const float *first, const float *second, const float *third, const float *normal)
{
    if (fn_82809CB0(normal[0]) > fn_82809CB0(normal[1])) {
        if (fn_82809CB0(normal[2]) > fn_82809CB0(normal[0])) {
            return fn_827EC748(second[0], second[1], third[0], third[1], first[0], first[1]);
        }
        return fn_827EC748(second[1], second[2], third[1], third[2], first[1], first[2]);
    }
    if (fn_82809CB0(normal[2]) > fn_82809CB0(normal[1])) {
        return fn_827EC748(second[0], second[1], third[0], third[1], first[0], first[1]);
    }
    return fn_827EC748(second[0], second[2], third[0], third[2], first[0], first[2]);
}

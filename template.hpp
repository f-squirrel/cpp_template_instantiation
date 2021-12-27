#pragma once

template<typename T>
class Templated {
public:
    Templated() = default;
    Templated(const T& t) : t_{t} {}
    //~Templated() {}
    const T& get() const { return t_; }
    void set(const T& t) { t_ = t; }
private:
    T t_;
};

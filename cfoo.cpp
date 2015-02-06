#include "cfoo.h"
#include "foo.h"


Foo FooInit() {
    CppFoo * ret = new CppFoo(1);
    return (void *)ret;
}

void FooFree(Foo f) {
    CppFoo * foo = (CppFoo * )f;
    delete foo;
}

void FooBar(Foo f) {
    CppFoo * foo = (CppFoo * )f;
    foo->Bar();
}

void FooTest() {
    CppFoo::Test();
}

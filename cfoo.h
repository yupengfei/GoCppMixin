#ifdef __cplusplus
extern "C" {
#endif

    typedef void * Foo;
    Foo FooInit();
    void FooFree(Foo);
    void FooBar(Foo);
    void FooTest();
#ifdef __cplusplus
}
#endif

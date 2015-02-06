# GoCppMixin

该库是一个c++与go语言混合编程的例子
##对于静态链接

在go语言中调用c++.使用说明如下：

gcc -c foo.cpp cfoo.cpp

产生两个静态的.o文件cfoo.o foo.o

ar -rcs libcfoo.a cfoo.o foo.o

其中r代表replace，即替换掉原有文件，c代表产生.a文件的过程不提供反馈，s代表在.a文件的开头创建入口列表。

产生libcfoo.a

接下来就可以运行

go run main.go

##对于动态链接

类似的有

g++ -c -fPIC foo.cpp cfoo.cpp

gcc -shared cfoo.o foo.o -o libcfoo.so

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/developer/Go/src/GoCppMixin

后面那个是我电脑上so文件所在的路径

go run main.go
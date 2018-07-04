1. [下载opencv](#https://sourceforge.net/projects/opencvlibrary/files/opencv-win/3.4.1/opencv-3.4.1-vc14_vc15.exe/download)
2. 设置 ` 项目 ` -> ` 属性 ` -> ` 链接器 ` -> ` 常规 ` -> ` 附加库目录 ` ` .\lib\; ` 并且把` opencv\build\x64\vc14\lib\*.lib ` 拷贝到` .\lib\ `
3. 设置 ` 项目 ` ` 属性 ` ` 链接器 ` ` 常规 ` ` 附加依赖项 ` ` .\opencv_world341.lib; ` **以配置Release作为例子**
4. 设置 ` 项目 ` ` 属性 ` ` VC++目录 ` ` 包含目录 ` ` .\include\; ` 并且把` opencv\build\include\* ` 拷贝到 ` .\include\ `
5. 把` opencv\build\x64\vc14\bin\opencv_world341*.dll ` 拷贝到 ` .\bin\ `

![修复dll](fixmeDll.png)

# C-project
#c++属实带恶人
---
![image](https://github.com/MaxKev1n/C-project/blob/master/images/Functions.png)
**2020.8.4**
项目创建于2020年8月4日，最终目的是创建一个类似于QQ的聊天工具，分为客户端和服务端  
聊天功能实现过程：  
1. 登录时，客户端通过TCP通信向服务端发送客户端的ip地址，服务端记录该账号ip  
2. 进行聊天时，客户端从服务端获取目标客户端的ip地址  
3. 双方客户端进行UDP通信 

# 2020.8.4
更新：1.初步完成客户端登陆界面基础控件（lineedit， label， pushbutton）  
          未完成：连接数据库的函数以及验证登录函数  
# 2020.8.5 
## 10:14 
  更新：完成连接服务器数据库及验证登录函数   
  ~~已知bug:密码输入栏和用户名输入栏位置错误~~  
## 12:15  
   完成登录界面并解决bug  
## 18:52  
  更新：完成连接服务器功能，添加QTcpsocket  
  # 2020.8.6  
  ## 10:46  
  完成基本远程通信功能  
  原理：1. 输入远程客户端的IPv4地址  
  2. 将IPv4地址填入发送数据函数  
  3. 远程客户端接收数据后输出在TextBrowser  
<img width="597" height="478" src="https://github.com/MaxKev1n/C-project/blob/master/images/result1.png"/>
<img width="597" height="478" src="https://github.com/MaxKev1n/C-project/blob/master/images/result2.png"/>

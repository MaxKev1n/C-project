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
## 10：14 
  更新：完成连接服务器数据库及验证登录函数   
  ~~已知bug:密码输入栏和用户名输入栏位置错误~~  
## 12：15  
   完成登录界面并解决bug  
## 18：52  
  更新：完成连接服务器功能，添加QTcpsocket  
  # 2020.8.6  
  ## 10:46  
  完成基本远程通信功能  
  原理：1. 输入远程客户端的IPv4地址  
  2. 将IPv4地址填入发送数据函数  
  3. 远程客户端接收数据后输出在TextBrowser  
<img width="452" height="512" src="https://github.com/MaxKev1n/C-project/blob/master/images/result1.png"/>
<img width="398" height="319" src="https://github.com/MaxKev1n/C-project/blob/master/images/result2.png"/>  
# 2020.8.7
## 00：36  
成功在服务器上搭建完成MySQL数据库并成功连接数据库  
**已知问题：QT库中缺少libmysql.dll文件，应当从Mysql安装目录中取出放入QT安装目录中，且应该符合QT位数，即：32位QT使用32位libmysql.dll文件文件，64位QT使用64位libmysql.dll文件.同时，在生成exe文件后应将libmysql.dll文件放入exe文件所在文件夹**   
# 2020.8.7
## 23：19  
客户端：完成注册账户功能，将新账号添加入数据库  
服务端：实现检测服务器连接情况及接入客户端IPv4地址
# 2020.8.9
## 13：07  
**更新1.2版本：**  
1. 添加好友栏，显示该用户拥有的好友
2. 完成添加好友功能  ：）
~~**已知bug：** 只能添加单个好友~~  
## 16：52
**修复已知bug**

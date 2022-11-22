#ifndef _ICENTRALCONTROL_H_
#define _ICENTRALCONTROL_H_

#include "CentralParam.h"

namespace CentralControl
{
    /// <summary>
    /// 通讯事件接口，纯虚函数
    /// </summary>
	class IMyClientB
	{
	public:
        /// <summary>
        /// 发送数据-N640图片显示
        /// </summary>
        virtual void SendN640PicShow(byte cmdParam) = 0 ;

        /// <summary>
        /// 发送数据-N640截图操作
        /// </summary>
        virtual void SendN640ScreenShot(byte cmdParam) = 0 ;

        /// <summary>
        /// 信号源切换
        /// </summary>
        /// <param name="cmdInput">输入源</param>
        /// <param name="cmdOutput">输出源</param>
        virtual void SendSignalSwitch(byte cmdInput, byte cmdOutput) = 0 ;

        /// <summary>
        /// 获取分辨率
        /// </summary>
        /// <param name="src">信号源选择 01-HDMI1 02-HDMI1 03-HDMI1 04-HDMI1 </param>
        virtual void SendResolution(byte src) = 0 ;

        /// <summary>
        /// HDMI口是否存在信号查询
        /// </summary>
        /// <param name="src">信号源选择 01-HDMI1 02-HDMI1 03-HDMI1 04-HDMI1 </param>
        virtual void SendCheckSignal(byte src) = 0 ;

        /// <summary>
        /// 发送心跳包
        /// </summary>
        virtual void SendHeartBeatData() = 0 ;

        /// <summary>
        /// 发送屏幕（背光）亮灭控制
        /// </summary>
        /// <param name="isBright">是否亮屏 true-亮 false-灭</param>
        virtual void SendScreenBrightOut(bool isBright) = 0 ;

        /// <summary>
        /// 发送WIFI启用、禁用控制
        /// </summary>
        /// <param name="isEnable">是否启用 0x01-启用 0x02-关闭</param>
        virtual void SendWIFICtrl(bool isEnable) = 0 ;

        /// <summary>
        /// 回复-通知应用关闭电脑控制
        /// </summary>
        /// <param name="shutDownType">关机类型：假关机、断电关机</param>
        /// <param name="isSuccessed">是否成功 0x01-成功 0x02-失败</param>
        virtual void RespNoticeAppShutdown(byte shutDownType, byte isSuccessed) = 0 ;

        /// <summary>
        /// 发送功放板音量调节
        /// </summary>
        /// <param name="volumeValue">音量值（0-100）</param>
        virtual void SendPowerAmplifierVolumeCtrl(byte volumeValue) = 0 ;

        /// <summary>
        /// 发送功放板模式调节
        /// </summary>
        /// <param name="mode">音效模式</param>
        virtual void SendPowerAmplifierModeCtrl(byte mode) = 0 ;

        /// <summary>
        /// 回复提笔和放笔的上报
        /// </summary>
        /// <param name="cmdParam"></param>
        /// <param name="isSuccessed"></param>
        virtual void RespTakePutPenReport(byte cmdParam, byte isSuccessed) = 0 ;

        /// <summary>
        /// 发送-功放板音量查询
        /// </summary>
        virtual void SendPowerAmplifierVolumeQuery() = 0 ;

        /// <summary>
        /// 发送-功放板音效查询
        /// </summary>
        virtual void SendPowerAmplifierModeQuery() = 0 ;

        /// <summary>
        /// 配置中控串口
        /// </summary>
        /// <param name="channel">串口通道</param>
        /// <param name="datab">数据位</param>
        /// <param name="dpaity">校验位</param>
        /// <param name="stopb1">停止位1</param>
        /// <param name="stopb2">停止位2</param>
        /// <param name="baudr">波特率</param>
        virtual void SendConfigSerialPort(byte channel, byte datab, byte dpaity, byte stopb1, byte stopb2, byte baudr) = 0 ;

        /// <summary>
        /// 串口发送
        /// </summary>
        /// <param name="channel">串口通道</param>
        /// <param name="senddata">串口发送数据</param>
        virtual void SerialSend(byte channel, byte senddata[]) = 0 ;

        /// <summary>
        /// 串口接收完成回复
        /// </summary>
        /// <param name="channel">串口通道</param>
        /// <param name="isSuccessed">是否接收成功</param>
        virtual void RespSerialReceive(byte channel, byte isSuccessed) = 0 ;

        /// <summary>
        /// 回复IO触发
        /// </summary>
        /// <param name="channel">IO触发通道</param>
        /// <param name="level">高低电平 0x01-高电平 0x02-低电平</param>
        /// <param name="isSucessed">是否成功 0x01-成功 0x02-失败</param>
        virtual void RespUPIO(byte channel, byte level, byte isSucessed) = 0 ;

        /// <summary>
        /// 使能继电器
        /// </summary>
        /// <param name="channel">继电器通道</param>
        /// <param name="isEnable">继电器开关 0x01-开启 0x02-关闭</param>
        virtual void CtrlRelay(byte channel, byte isEnable) = 0 ;

        /// <summary>
        /// 开启红外学习
        /// </summary>
        virtual void StartInfraredLearn() = 0 ;

        /// <summary>
        /// 发送红外数据
        /// </summary>
        /// <param name="index">红外索引号</param>
        /// <param name="infrareddata">红外数据</param>
        virtual void SendInfraredData(byte index, byte infrareddata[]) = 0 ;

        /// <summary>
        /// 回复红外接收数据
        /// </summary>
        /// <param name="index">红外索引号</param>
        /// <param name="isSucessed">是否成功 0x01-成功 0x02-失败</param>
        virtual void RespInfraredData(byte index, byte isSucessed) = 0 ;

        /// <summary>
        /// 光照强度
        /// </summary>
        /// <param name="isSuccessed">是否接收成功</param>
        virtual void RespLightIntensity(byte isSuccessed) = 0 ;

        /// <summary>
        /// 温湿度
        /// </summary>
        /// <param name="isSuccessed">是否接收成功</param>
        virtual void RespHumitureData(byte isSuccessed) = 0 ;

        /// <summary>
        /// 人体传感器
        /// </summary>
        /// <param name="isSuccessed">是否接收成功</param>
        virtual void RespBodySensor(byte isSuccessed) = 0 ;

        /// <summary>
        /// 发送触摸HID数据
        /// </summary>
        virtual void SendTouchHIDData(byte hiddata[]) = 0 ;

        /// <summary>
        /// 发送-中控状态查询
        /// </summary>
        virtual void SendStatusQuery() = 0 ;

        /// <summary>
        /// 发送-设置中控状态
        /// </summary>
        /// <param name="status"></param>
        virtual void SendSetCtCtrlStatus(byte status) = 0 ;

        /// <summary>
        /// 发送设置音源输出
        /// </summary>
        /// <param name="src"></param>
        virtual void SendSetSoundSrc(byte src) = 0 ;

        /// <summary>
        /// 发送-输入设备音量调节
        /// </summary>
        /// <param name="devType"></param>
        /// <param name="value"></param>
        virtual void SendSetDevInVolume(byte devType, byte value) = 0 ;
	};
}

#endif // !_ICENTRALCONTROL_H_


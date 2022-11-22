#ifndef _CMDTYPE_H_
#define _CMDTYPE_H_

namespace CentralControl
{
    enum  CmdType
    {
        /// <summary>
        ///  未知类型
        /// </summary>
        UNKNOWN = -1,
        /// <summary>
        /// N640图片显示
        /// </summary>
        DISPLAY_PICTURE,
        /// <summary>
        /// 截图操作
        /// </summary>
        SCREENSHOT,
        /// <summary>
        /// 信号源切换
        /// </summary>
        SWITCH_SOURCE,
        /// <summary>
        /// 分辨率
        /// </summary>
        RESOLUTION,
        /// <summary>
        /// 分辨率上报
        /// </summary>
        SUBMIT_RESOLUTION,
        /// <summary>
        /// 信号查询
        /// </summary>
        SIGNAL_CHECK,
        /// <summary>
        /// 信号查询上报
        /// </summary>
        SUBMIT_SIGNALCHECK,
        /// <summary>
        /// 应用心跳保持
        /// </summary>
        KEEP_HEART = 100,
        /// <summary>
        /// 屏幕亮灭
        /// </summary>
        CONTROL_SCREEN,
        /// <summary>
        /// WIFI使能控制
        /// </summary>
        CONTROL_WIFI,
        /// <summary>
        /// 关闭电脑
        /// </summary>
        CLOSE_PC,
        /// <summary>
        /// 音量调节
        /// </summary>
        CONTROL_VOLUME,
        /// <summary>
        /// 模式调节
        /// </summary>
        CONTROL_MODEL,
        /// <summary>
        /// 查询功放音量
        /// </summary>
        GET_SPEAKER_VOLUME,
        /// <summary>
        /// 查询功放模式
        /// </summary>
        GET_SPEAKER_MODE,
        /// <summary>
        /// 提笔和放笔
        /// </summary>
        CONTROL_PEN,
        /// <summary>
        /// 串口配置
        /// </summary>
        SERIAL_CONFIG,
        /// <summary>
        /// 串口发送
        /// </summary>
        SERIAL_SEND,
        /// <summary>
        /// 串口接收
        /// </summary>
        SERIAL_RECEIVE,
        /// <summary>
        /// IO触发
        /// </summary>
        TOUCH_IO,
        /// <summary>
        /// 继电器
        /// </summary>
        RELAY,
        /// <summary>
        /// 红外学习
        /// </summary>
        INFRARED_LEARN,
        /// <summary>
        /// 红外发送
        /// </summary>
        INFRARED_SEND,
        /// <summary>
        /// 红外接收
        /// </summary>
        INFRARED_RECEIVE,
        /// <summary>
        /// 光照强度
        /// </summary>
        ILLUMINANCE,
        /// <summary>
        /// 温湿度
        /// </summary>
        HUMITURE,
        /// <summary>
        /// 人体感应
        /// </summary>
        BODY_INDUCTION,
        /// <summary>
        /// 触摸HID
        /// </summary>
        TOUCH_HID,
        /// <summary>
        /// 获取中控状态
        /// </summary>
        Get_CenterCtrl_Status,
        /// <summary>
        /// 设置中控状态
        /// </summary>
        Set_CenterCtrl_Status,
        /// <summary>
        /// 功放输出控制（音源输出设置）
        /// </summary>
        Set_SoundSrc,
        /// <summary>
        /// Line in、Mic in音量调节(0-100)
        /// </summary>
        SetDevInVolume,
    };
}


#endif // !_CMDTYPE_H_

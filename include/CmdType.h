#ifndef _CMDTYPE_H_
#define _CMDTYPE_H_

namespace CentralControl
{
    enum  CmdType
    {
        /// <summary>
        ///  δ֪����
        /// </summary>
        UNKNOWN = -1,
        /// <summary>
        /// N640ͼƬ��ʾ
        /// </summary>
        DISPLAY_PICTURE,
        /// <summary>
        /// ��ͼ����
        /// </summary>
        SCREENSHOT,
        /// <summary>
        /// �ź�Դ�л�
        /// </summary>
        SWITCH_SOURCE,
        /// <summary>
        /// �ֱ���
        /// </summary>
        RESOLUTION,
        /// <summary>
        /// �ֱ����ϱ�
        /// </summary>
        SUBMIT_RESOLUTION,
        /// <summary>
        /// �źŲ�ѯ
        /// </summary>
        SIGNAL_CHECK,
        /// <summary>
        /// �źŲ�ѯ�ϱ�
        /// </summary>
        SUBMIT_SIGNALCHECK,
        /// <summary>
        /// Ӧ����������
        /// </summary>
        KEEP_HEART = 100,
        /// <summary>
        /// ��Ļ����
        /// </summary>
        CONTROL_SCREEN,
        /// <summary>
        /// WIFIʹ�ܿ���
        /// </summary>
        CONTROL_WIFI,
        /// <summary>
        /// �رյ���
        /// </summary>
        CLOSE_PC,
        /// <summary>
        /// ��������
        /// </summary>
        CONTROL_VOLUME,
        /// <summary>
        /// ģʽ����
        /// </summary>
        CONTROL_MODEL,
        /// <summary>
        /// ��ѯ��������
        /// </summary>
        GET_SPEAKER_VOLUME,
        /// <summary>
        /// ��ѯ����ģʽ
        /// </summary>
        GET_SPEAKER_MODE,
        /// <summary>
        /// ��ʺͷű�
        /// </summary>
        CONTROL_PEN,
        /// <summary>
        /// ��������
        /// </summary>
        SERIAL_CONFIG,
        /// <summary>
        /// ���ڷ���
        /// </summary>
        SERIAL_SEND,
        /// <summary>
        /// ���ڽ���
        /// </summary>
        SERIAL_RECEIVE,
        /// <summary>
        /// IO����
        /// </summary>
        TOUCH_IO,
        /// <summary>
        /// �̵���
        /// </summary>
        RELAY,
        /// <summary>
        /// ����ѧϰ
        /// </summary>
        INFRARED_LEARN,
        /// <summary>
        /// ���ⷢ��
        /// </summary>
        INFRARED_SEND,
        /// <summary>
        /// �������
        /// </summary>
        INFRARED_RECEIVE,
        /// <summary>
        /// ����ǿ��
        /// </summary>
        ILLUMINANCE,
        /// <summary>
        /// ��ʪ��
        /// </summary>
        HUMITURE,
        /// <summary>
        /// �����Ӧ
        /// </summary>
        BODY_INDUCTION,
        /// <summary>
        /// ����HID
        /// </summary>
        TOUCH_HID,
        /// <summary>
        /// ��ȡ�п�״̬
        /// </summary>
        Get_CenterCtrl_Status,
        /// <summary>
        /// �����п�״̬
        /// </summary>
        Set_CenterCtrl_Status,
        /// <summary>
        /// ����������ƣ���Դ������ã�
        /// </summary>
        Set_SoundSrc,
        /// <summary>
        /// Line in��Mic in��������(0-100)
        /// </summary>
        SetDevInVolume,
    };
}


#endif // !_CMDTYPE_H_

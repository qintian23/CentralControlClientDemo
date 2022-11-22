#ifndef _ICENTRALCONTROL_H_
#define _ICENTRALCONTROL_H_

#include "CentralParam.h"

namespace CentralControl
{
    /// <summary>
    /// ͨѶ�¼��ӿڣ����麯��
    /// </summary>
	class IMyClientB
	{
	public:
        /// <summary>
        /// ��������-N640ͼƬ��ʾ
        /// </summary>
        virtual void SendN640PicShow(byte cmdParam) = 0 ;

        /// <summary>
        /// ��������-N640��ͼ����
        /// </summary>
        virtual void SendN640ScreenShot(byte cmdParam) = 0 ;

        /// <summary>
        /// �ź�Դ�л�
        /// </summary>
        /// <param name="cmdInput">����Դ</param>
        /// <param name="cmdOutput">���Դ</param>
        virtual void SendSignalSwitch(byte cmdInput, byte cmdOutput) = 0 ;

        /// <summary>
        /// ��ȡ�ֱ���
        /// </summary>
        /// <param name="src">�ź�Դѡ�� 01-HDMI1 02-HDMI1 03-HDMI1 04-HDMI1 </param>
        virtual void SendResolution(byte src) = 0 ;

        /// <summary>
        /// HDMI���Ƿ�����źŲ�ѯ
        /// </summary>
        /// <param name="src">�ź�Դѡ�� 01-HDMI1 02-HDMI1 03-HDMI1 04-HDMI1 </param>
        virtual void SendCheckSignal(byte src) = 0 ;

        /// <summary>
        /// ����������
        /// </summary>
        virtual void SendHeartBeatData() = 0 ;

        /// <summary>
        /// ������Ļ�����⣩�������
        /// </summary>
        /// <param name="isBright">�Ƿ����� true-�� false-��</param>
        virtual void SendScreenBrightOut(bool isBright) = 0 ;

        /// <summary>
        /// ����WIFI���á����ÿ���
        /// </summary>
        /// <param name="isEnable">�Ƿ����� 0x01-���� 0x02-�ر�</param>
        virtual void SendWIFICtrl(bool isEnable) = 0 ;

        /// <summary>
        /// �ظ�-֪ͨӦ�ùرյ��Կ���
        /// </summary>
        /// <param name="shutDownType">�ػ����ͣ��ٹػ����ϵ�ػ�</param>
        /// <param name="isSuccessed">�Ƿ�ɹ� 0x01-�ɹ� 0x02-ʧ��</param>
        virtual void RespNoticeAppShutdown(byte shutDownType, byte isSuccessed) = 0 ;

        /// <summary>
        /// ���͹��Ű���������
        /// </summary>
        /// <param name="volumeValue">����ֵ��0-100��</param>
        virtual void SendPowerAmplifierVolumeCtrl(byte volumeValue) = 0 ;

        /// <summary>
        /// ���͹��Ű�ģʽ����
        /// </summary>
        /// <param name="mode">��Чģʽ</param>
        virtual void SendPowerAmplifierModeCtrl(byte mode) = 0 ;

        /// <summary>
        /// �ظ���ʺͷűʵ��ϱ�
        /// </summary>
        /// <param name="cmdParam"></param>
        /// <param name="isSuccessed"></param>
        virtual void RespTakePutPenReport(byte cmdParam, byte isSuccessed) = 0 ;

        /// <summary>
        /// ����-���Ű�������ѯ
        /// </summary>
        virtual void SendPowerAmplifierVolumeQuery() = 0 ;

        /// <summary>
        /// ����-���Ű���Ч��ѯ
        /// </summary>
        virtual void SendPowerAmplifierModeQuery() = 0 ;

        /// <summary>
        /// �����пش���
        /// </summary>
        /// <param name="channel">����ͨ��</param>
        /// <param name="datab">����λ</param>
        /// <param name="dpaity">У��λ</param>
        /// <param name="stopb1">ֹͣλ1</param>
        /// <param name="stopb2">ֹͣλ2</param>
        /// <param name="baudr">������</param>
        virtual void SendConfigSerialPort(byte channel, byte datab, byte dpaity, byte stopb1, byte stopb2, byte baudr) = 0 ;

        /// <summary>
        /// ���ڷ���
        /// </summary>
        /// <param name="channel">����ͨ��</param>
        /// <param name="senddata">���ڷ�������</param>
        virtual void SerialSend(byte channel, byte senddata[]) = 0 ;

        /// <summary>
        /// ���ڽ�����ɻظ�
        /// </summary>
        /// <param name="channel">����ͨ��</param>
        /// <param name="isSuccessed">�Ƿ���ճɹ�</param>
        virtual void RespSerialReceive(byte channel, byte isSuccessed) = 0 ;

        /// <summary>
        /// �ظ�IO����
        /// </summary>
        /// <param name="channel">IO����ͨ��</param>
        /// <param name="level">�ߵ͵�ƽ 0x01-�ߵ�ƽ 0x02-�͵�ƽ</param>
        /// <param name="isSucessed">�Ƿ�ɹ� 0x01-�ɹ� 0x02-ʧ��</param>
        virtual void RespUPIO(byte channel, byte level, byte isSucessed) = 0 ;

        /// <summary>
        /// ʹ�̵ܼ���
        /// </summary>
        /// <param name="channel">�̵���ͨ��</param>
        /// <param name="isEnable">�̵������� 0x01-���� 0x02-�ر�</param>
        virtual void CtrlRelay(byte channel, byte isEnable) = 0 ;

        /// <summary>
        /// ��������ѧϰ
        /// </summary>
        virtual void StartInfraredLearn() = 0 ;

        /// <summary>
        /// ���ͺ�������
        /// </summary>
        /// <param name="index">����������</param>
        /// <param name="infrareddata">��������</param>
        virtual void SendInfraredData(byte index, byte infrareddata[]) = 0 ;

        /// <summary>
        /// �ظ������������
        /// </summary>
        /// <param name="index">����������</param>
        /// <param name="isSucessed">�Ƿ�ɹ� 0x01-�ɹ� 0x02-ʧ��</param>
        virtual void RespInfraredData(byte index, byte isSucessed) = 0 ;

        /// <summary>
        /// ����ǿ��
        /// </summary>
        /// <param name="isSuccessed">�Ƿ���ճɹ�</param>
        virtual void RespLightIntensity(byte isSuccessed) = 0 ;

        /// <summary>
        /// ��ʪ��
        /// </summary>
        /// <param name="isSuccessed">�Ƿ���ճɹ�</param>
        virtual void RespHumitureData(byte isSuccessed) = 0 ;

        /// <summary>
        /// ���崫����
        /// </summary>
        /// <param name="isSuccessed">�Ƿ���ճɹ�</param>
        virtual void RespBodySensor(byte isSuccessed) = 0 ;

        /// <summary>
        /// ���ʹ���HID����
        /// </summary>
        virtual void SendTouchHIDData(byte hiddata[]) = 0 ;

        /// <summary>
        /// ����-�п�״̬��ѯ
        /// </summary>
        virtual void SendStatusQuery() = 0 ;

        /// <summary>
        /// ����-�����п�״̬
        /// </summary>
        /// <param name="status"></param>
        virtual void SendSetCtCtrlStatus(byte status) = 0 ;

        /// <summary>
        /// ����������Դ���
        /// </summary>
        /// <param name="src"></param>
        virtual void SendSetSoundSrc(byte src) = 0 ;

        /// <summary>
        /// ����-�����豸��������
        /// </summary>
        /// <param name="devType"></param>
        /// <param name="value"></param>
        virtual void SendSetDevInVolume(byte devType, byte value) = 0 ;
	};
}

#endif // !_ICENTRALCONTROL_H_


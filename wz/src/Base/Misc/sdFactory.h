//*************************************************************************************************
// ����:	�����ӿ�
//---------------------------------------------------------
// ����:		
// ����:		2013-01-15
// ����޸�:
//*************************************************************************************************
#pragma once
#ifndef _SD_BASE_MISC_IFACTORY_H__
#define _SD_BASE_MISC_IFACTORY_H__

#include "sdSingleton.h"

BASE_NAMESPACE_BEGIN_BASE
BASE_NAMESPACE_BEGIN_MISC
//-------------------------------------------------------------------------------------------------
// ע��: 
//	���������������ᱻ����,����Ӧ��д��Destroy����
//-------------------------------------------------------------------------------------------------
class IFactory : public Base::sdTSingleton<IFactory>
{
public:
	virtual ~IFactory() = 0;

	// ��ʼ��������
	virtual bool Initialize() = 0;
	virtual void Destroy() = 0;
};
//-------------------------------------------------------------------------------------------------
BASE_NAMESPACE_END_MISC
BASE_NAMESPACE_END_BASE
#endif
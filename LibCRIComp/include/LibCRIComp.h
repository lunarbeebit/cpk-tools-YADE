// LibCRIComp.h

#pragma once


namespace LibCRIComp {

	class CriCompression
	{
		public:static int CRIcompress(unsigned char *dest, int *destLen, unsigned char *src, int srcLen);
	};
}

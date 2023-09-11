#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <string>

namespace ChromaSDK
{
	class VerifyLibrarySignature
	{
	public:
		static BOOL VerifyModule(const std::string& filename);
		static BOOL IsFileVersionSameOrNewer(const std::string& filename, const int minMajor, const int minMinor, const int minRevision, const int minBuild);
	private:
		static BOOL IsFileSignedByRazer(const char* szFileName);
		static BOOL IsFileSigned(const char* szFileName);
	};
}

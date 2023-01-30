#pragma once

#include <string>


namespace kr::ac::PnuAilab::table
{

	class Sung_Jo
	{
	public:
		static const wchar_t ChoSung[] = { L'ㄱ', L'ㄲ', L'ㄴ', L'ㄷ',L'ㄸ', L'ㄹ', L'ㅁ', L'ㅂ',L'ㅃ', L'ㅅ', L'ㅆ', L'ㅇ',L'ㅈ', L'ㅉ', L'ㅊ', L'ㅋ',L'ㅌ', L'ㅍ', L'ㅎ' };
		static const wchar_t JungSung[] = { L'ㅏ', L'ㅐ', L'ㅑ', L'ㅒ', L'ㅓ', L'ㅔ', L'ㅕ', L'ㅖ', L'ㅗ', L'ㅘ', L'ㅙ', L'ㅚ', L'ㅛ', L'ㅜ', L'ㅝ', L'ㅞ', L'ㅟ', L'ㅠ', L'ㅡ', L'ㅢ', L'ㅣ' };
		static const wchar_t JongSung[] = { L' ', L'ㄱ', L'ㄱ', L'ㄱ', L'ㄴ', L'ㄴ', L'ㄴ', L'ㄷ', L'ㄹ', L'ㄱ', L'ㅁ', L'ㄹ', L'ㄹ', L'ㄹ', L'ㅍ', L'ㄹ', L'ㅁ', L'ㅂ', L'ㅂ', L'ㅅ', L'ㅅ', L'ㅇ', L'ㅈ', L'ㅊ', L'ㅋ', L'ㅌ', L'ㅍ', L'ㅎ' };
		static std::wstring JaEum_ChoSung[] = { L"g", L"kk", L"n", L"d", L"tt", L"l", L"m", L"b", L"pp", L"s", L"ss", L" ", L"j", L"jj", L"ch", L"k", L"t", L"p", L"h" };
		static std::wstring MoEum[] = { L"a", L"ae", L"ya", L"yae", L"eo", L"e", L"yeo", L"ye", L"o", L"wa", L"wae", L"oe", L"yo", L"u", L"wo", L"we", L"wi", L"yu", L"eu", L"ui", L"i" };
		static std::wstring JaEum_JongSung[] = { L" ", L"g", L"-", L"-", L"n", L"-", L"-", L"d", L"l", L"-", L"-", L"-", L"-", L"-", L"-", L"-", L"m", L"b", L"-", L"s", L"-", L"ng", L"-", L"-", L"k", L"t", L"p", L"-" };
	}

}

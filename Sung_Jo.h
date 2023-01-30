#pragma once

#include <string>


namespace kr::ac::PnuAilab::table
{

	class Sung_Jo
	{
	public:
		static const wchar_t ChoSung[] = { L'$)C$!', L'$"', L'$$', L'$'',L'$(', L'$)', L'$1', L'$2',L'$3', L'$5', L'$6', L'$7',L'$8', L'$9', L'$:', L'$;',L'$<', L'$=', L'$>' };
		static const wchar_t JungSung[] = { L'$?', L'$@', L'$A', L'$B', L'$C', L'$D', L'$E', L'$F', L'$G', L'$H', L'$I', L'$J', L'$K', L'$L', L'$M', L'$N', L'$O', L'$P', L'$Q', L'$R', L'$S' };
		static const wchar_t JongSung[] = { L' ', L'$!', L'$!', L'$!', L'$$', L'$$', L'$$', L'$'', L'$)', L'$!', L'$1', L'$)', L'$)', L'$)', L'$=', L'$)', L'$1', L'$2', L'$2', L'$5', L'$5', L'$7', L'$8', L'$:', L'$;', L'$<', L'$=', L'$>' };
		static std::wstring JaEum_ChoSung[] = { L"g", L"kk", L"n", L"d", L"tt", L"l", L"m", L"b", L"pp", L"s", L"ss", L" ", L"j", L"jj", L"ch", L"k", L"t", L"p", L"h" };
		static std::wstring MoEum[] = { L"a", L"ae", L"ya", L"yae", L"eo", L"e", L"yeo", L"ye", L"o", L"wa", L"wae", L"oe", L"yo", L"u", L"wo", L"we", L"wi", L"yu", L"eu", L"ui", L"i" };
		static std::wstring JaEum_JongSung[] = { L" ", L"g", L"-", L"-", L"n", L"-", L"-", L"d", L"l", L"-", L"-", L"-", L"-", L"-", L"-", L"-", L"m", L"b", L"-", L"s", L"-", L"ng", L"-", L"-", L"k", L"t", L"p", L"-" };
	}

}

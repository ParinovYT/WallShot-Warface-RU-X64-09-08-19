struct SRWIParams
{
	char pad[0x30];
	int objtypes;
};
__int64 WINAPI myRWI(QWORD RCX, SRWIParams* drinfo, __int64 pNameTag, int i)
{
	int ObjId = 799;
	if (TRUE)
		if (drinfo)
			if (drinfo->objtypes == ObjId)
				drinfo->objtypes = 16;
	return ((__int64(__stdcall*)(QWORD, SRWIParams*, __int64, unsigned int))(OriginalFunc))(RCX, drinfo, pNameTag, i);
}

index 34

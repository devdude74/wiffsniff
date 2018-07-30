#ifdef cplusplus
#define PKTSZ 16
#endif

int main (int argc, char** argv)
{
	do {
		/* Busy Spin. We exit() elsewhere */
		wait_for_pkt();
	} while(1);
}
/* end of source */
/* foooo */

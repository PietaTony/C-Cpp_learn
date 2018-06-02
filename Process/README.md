<blockquote cite="https://stackoverflow.com/questions/41498383/what-do-the-identifiers-pid-ppid-sid-pgid-uid-euid-mean?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa">
  PID - Process ID<br>
  PPID - Parent Process ID<br>
  SID - Session ID<br>
  PGID - Process Group ID<br>
  UID - User ID<br>
  EUID - Effective User ID<br>
</blockquote>
<br>
Run Fork_RAM_test will get result:<br>
[Parent] wait child exit ...<br>
[Child] child change global & local & malloc value!<br>
[Child] child exit<br>
[Parent] child have exit<br>
[Parent] g_int = 1<br>
[Parent] l_int = 1<br>
[Parent] m_int = 1<br>
<br>
Reference:<br>

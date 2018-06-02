<p>In <b><a href="https://github.com/PietaTony/C-Cpp_learn/blob/master/Process/Process.cpp">Process.cpp</a></b> please take notice of these breifiations:<blockquote cite="https://stackoverflow.com/questions/41498383/what-do-the-identifiers-pid-ppid-sid-pgid-uid-euid-mean?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa">
    PID - Process ID<br>
    PPID - Parent Process ID<br>
    SID - Session ID<br>
    PGID - Process Group ID<br>
    UID - User ID<br>
    EUID - Effective User ID<br>
</blockquote></p>
<br>
<p>
  On execution of <b><a href="https://github.com/PietaTony/C-Cpp_learn/blob/master/Process/fork_RAM_test.cpp">fork_RAM_test.cpp</a></b> will receive the following result:<br>
    [Parent] wait child exit ...<br>
    [Child] child change global & local & malloc value!<br>
    [Child] child exit<br>
    [Parent] child have exit<br>
    [Parent] g_int = 1<br>
    [Parent] l_int = 1<br>
    [Parent] m_int = 1<br>
  <br>
  The purpose of this file is to test whether P(Process) will affect the variables of PP(Parent Process).<br>
  There is a total of three different variables(Global, Local, Malloc).<br>
</p><br>
<br>
<p>
  On execution of <b><a href="https://github.com/PietaTony/C-Cpp_learn/blob/master/Process/fork_file_test.cpp">fork_file_test.cpp</a></b> will receive the following result:<br>
    5932: 1<br>
    5933: 2<br>
    5932: 3<br>
    5933: 4<br>
    5932: 5<br>
    5933: 6<br>
  <br>
  Please note that you will receive different results depending on the number of cores in your CPU.<br>
  The reason of different results is caused by the PP(Parent Proccess) and P(Proccess) being executed at the same time.<br>
</p><br>
<br>
Reference:<br>
Book: 深入理解Linuxt程式設計-從應用到核心 (ACL049300)<br>

<p>In <b><a href="https://github.com/PietaTony/C-Cpp_learn/blob/master/Process/Process.cpp">Process.cpp</a></b> take care this word:<blockquote cite="https://stackoverflow.com/questions/41498383/what-do-the-identifiers-pid-ppid-sid-pgid-uid-euid-mean?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa">
    PID - Process ID<br>
    PPID - Parent Process ID<br>
    SID - Session ID<br>
    PGID - Process Group ID<br>
    UID - User ID<br>
    EUID - Effective User ID<br>
</blockquote></p>
<br>
<p>
  Run <b><a href="https://github.com/PietaTony/C-Cpp_learn/blob/master/Process/fork_RAM_test.cpp">fork_RAM_test.cpp</a></b> will get result:<br>
    [Parent] wait child exit ...<br>
    [Child] child change global & local & malloc value!<br>
    [Child] child exit<br>
    [Parent] child have exit<br>
    [Parent] g_int = 1<br>
    [Parent] l_int = 1<br>
    [Parent] m_int = 1<br>
</p><br>
<br>
<p>
  Run <b><a href="https://github.com/PietaTony/C-Cpp_learn/blob/master/Process/fork_file_test.cpp">fork_file_test.cpp</a></b> will get result:<br>
    5932: 1<br>
    5933: 2<br>
    5932: 3<br>
    5933: 4<br>
    5932: 5<br>
    5933: 6<br>
  <br>
  If is Multi-core to run this code will get defferent result.<br>
  In the book (see Reference p.117) will see, when use fork() have to take care of Multi-core.<br>
</p><br>
<br>
Reference:<br>
Book: 深入理解Linuxt程式設計-從應用到核心 (ACL049300)<br>

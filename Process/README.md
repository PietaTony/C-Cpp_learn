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
<p><table border="2">
<tbody><tr align="CENTER"><td><code><b>wait()</b></code></td><td><code><b>waitpid()</b></code></td></tr>
<tr>
<td width="50%"><code>wait</code> blocks the caller until a child process terminates</td>
<td width="50%"><br><code>waitpid</code> can be either blocking or non-blocking:
                          <ul><li>If <i>options</i> is 0, then it is blocking
                              </li><li>If <i>options</i> is WNOHANG, then is it non-blocking
                          </li></ul></td>
</tr>
<tr>
<td width="50%">if more than one child is running then <code>wait()</code> returns the first time one of the parent's offspring exits</td>
<td width="50%"><br><code>waitpid</code> is more flexible:
<p>
    </p><ul>
    <li>If <i>pid == -1</i>, it waits for any child process.  In this respect, 
        <code>waitpid</code> is equivalent to <code>wait</code>
    </li><li>If <i>pid &gt; 0</i>, it waits for the child whose process ID equals pid
    </li><li>If <i>pid == 0</i>, it waits for any child whose process group ID equals that
        of the calling process
    </li><li>If <i>pid &lt; -1</i>, it waits for any child whose process group ID equals that absolute value of pid
    </li></ul></td>
</tr>
</tbody></table>
<br>
Reference:<br>
https://webdocs.cs.ualberta.ca/~tony/C379/C379Labs/Lab3/wait.html<br>
 深入理解Linuxt程式設計-從應用到核心 (ISBN 978-986-476-416-7)<br>

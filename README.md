<h1 align = "center" > Command Line Messaging </h1>
<br>
<p align = "center" ><strong>Command line messaging and data transferring  application (Just for fun)</strong></p>
<br>

<p align = "center" ><b>Reference Documents :-</b> https://www.csd.uoc.gr/~hy556/material/tutorials/cs556-3rd-tutorial.pdf</p>
<br>

<p align = "center" ><em>If you want to make one you can use  both the chat and the referrence.</em></p>
<br>
</br>

<p align = "center" > <strong>A set of instruction if you want to build one :- </strong> https://chat.openai.com/share/2733ae29-2679-4e6f-997d-e20d53b5529d </p>
<br>
<img width="1000" alt="Screenshot 2024-01-26 at 3 59 12 PM" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/58899d8f-28c4-4eaa-ad2a-7975757c3c66">
<p align = "center" ><b>In the below diagram you can see how the function gonna work in a sequential mannar and interaction between them . </b></p>
<br>
<img width="1000" alt="Screenshot 2024-01-26 at 4 01 52 PM" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/bcf3845d-ed43-4dbc-bbe3-eb155eb1b887">
<h1 align="center"> <i> All the function used and their details :- </i> </h1>
 <h2 align="center"> 1. socket() </h2>
<img width="1000" alt="socket" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/eded700e-faba-4b7f-a5fe-85892a730dc6">
<br>

 <h2 align="center"> 2. bind() </h2>
<br>
<img width="1000" alt="bind1" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/e1c6b6bf-e790-43bf-aa58-5f4ba7d59a3f">
<br>
<img width="1000" alt="bind2" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/cbc3a98c-d497-439d-9a93-5fa0e3936f27">

 <h2 align="center"> 3. listen() </h2>
<br>
<img width="1000" alt="listen" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/d26c6152-3cf0-4812-a07d-e8f2001e8be5">
<br>
 <h2 align="center"> 4. accept() </h2>
<br>
<img width="1000" alt="accept" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/ed8d6230-fcf8-4eec-af4a-887e7ad6f393">
<br>
 <h2 align="center"> 5. connection() </h2>

<br>
<img width="1000" alt="connection" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/22b32519-a9b3-4775-bc9d-ac929c9fd6d0">
<br>

 <h2 align="center"> 6. read() and write() </h2>
<br>
<img width="1000" alt="readwrite" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/657492ee-2892-41a5-b124-894f8339ae95">
<h1 align="center"> For running the cli messaging app </h1>
<p aling = "center"><em> 1. Open two terminal windows</em> </p>
<br>
<p aling = "center"><em> 2. Open the directory in which the file is saved </em> </p>
<br>
<p aling = "center"><em> 3. Run this code for server </em> </p>

``` gcc server.c -o server  ```

<p aling = "center"><em> 4. select a port for server eg:9898 </em> </p>

```  ./server 9898 ```

<p aling = "center"><em> 5. Run this code for client </em> </p>

``` gcc client.c -o client ```

<p aling = "center"><em> 6. select a port for server eg:9898 </em> </p>


``` ./client 127.0.0.1 9898  ```

<p aling = "center"><em> 7.You can use any port that is valid in place of 9898 </em> </p>
<p aling = "center"><em> At last the result will look like this .</em> </p>

<img width="1464" alt="Screenshot 2024-01-26 at 11 07 48 PM" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/05205cd2-f2fe-43b7-b4ad-0b9caf54308f">

<p aling = "center"><em> Next goal adding Secure Socket Layer and Then Encryption </em> </p>


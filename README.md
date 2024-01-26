<h1 align = "center" > CLImessaging </h1>
<br>
<p align = "center" ><strong>Command line messaging and data transferring  application (Just for fun)</strong></p>
<br>
<p align = "center" ><b>Reference Documents: </b>" https://www.csd.uoc.gr/~hy556/material/tutorials/cs556-3rd-tutorial.pdf"</p>
<br>
<p align = "center" ><em>I have use similar approach but not just copied it so my code may look different but it does the same thing .</em></p>
</br>

<p align = "center" ><b>A set of instruction if you want to build one :- </b>"https://chat.openai.com/share/2733ae29-2679-4e6f-997d-e20d53b5529d "</p>
<br>
<img width="1000" alt="Screenshot 2024-01-26 at 3 59 12 PM" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/58899d8f-28c4-4eaa-ad2a-7975757c3c66">
<p align = "center" ><b>In the below diagram you can see how the function gonna work in a sequential mannar and interaction between them . </b></p>
<br>
<img width="1000" alt="Screenshot 2024-01-26 at 4 01 52 PM" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/bcf3845d-ed43-4dbc-bbe3-eb155eb1b887">
<p align="center"> <strong> All the function used and their details </strong> </p>
<p align="center"> (1) socket() </p>
<img width="1000" alt="socket" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/eded700e-faba-4b7f-a5fe-85892a730dc6">
<br>
<p align="center"> (2) bind() </p>
<br>
<img width="1000" alt="bind1" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/e1c6b6bf-e790-43bf-aa58-5f4ba7d59a3f">
<br>
<img width="1000" alt="bind2" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/cbc3a98c-d497-439d-9a93-5fa0e3936f27">
<p align="center"> (3) listen() </p>
<br>
<img width="1000" alt="listen" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/d26c6152-3cf0-4812-a07d-e8f2001e8be5">
<br>
<p align="center"><h2> (4) accept()</h2> </p>
<br>
<img width="1000" alt="accept" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/ed8d6230-fcf8-4eec-af4a-887e7ad6f393">
<br>
<p align="center"> (5) connection() </p>
<br>
<img width="1000" alt="connection" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/22b32519-a9b3-4775-bc9d-ac929c9fd6d0">
<br>
<p align="center"> (6) read() & write() </p>
<br>
<img width="1000" alt="readwrite" src="https://github.com/MohdXHassan/CLImessaging/assets/46120048/657492ee-2892-41a5-b124-894f8339ae95">


<h1 align=center>Mecanismos de un sistema operativo para el control de acceso de recursos para diferentes usuarios </h1>


<h2>De forma General</h2>
<hr>

<p align=justify>
Los mecanismos para realizar un control en el acceso de recursos por parte de usuarios son diversos y estarán dependiendo del sistema operativo que se esté tratando. No obstante, es posible encontrar generalidades:
<ul>
<li>Autentificación: los sitemas operativos necesitan de credenciales, una forma de identificar a cada usuario, por ende la utilización de credenciales como un nombre del usuario permiten al sistema operativo poder dotar de una identidad diferenciable para cada usuario.</li>
<li>Autorización de acceso: no todos los usuarios podrán acceder a cualquier recurso (un recurso en particular), debido a que se tienen jerarquías, como el más conocido por todos el famoso "permisos de administrador". La autorización estará basada en el privilegio mínimo, tal que un solo usuario tendrá permitido ingresar a solo aquellos recursos que sean necesarios para realizar su trabajo.</li>
</ul>
</p>

<br><br>
<h2 align=center>Windows</h2>

<hr>
<h3 >Seguridad del sistema operativo Windows</h3>

La seguridad y la privacidad dependen de un sistema operativo que protege el sistema y la información desde el momento en que se inicia, lo que proporciona una protección fundamental de chip a nube. 

Sabemos que en la mayoría de los casos entre más reciente sea el sistema operativo mayor será la protección que tiene.
Estas medidas de seguridad incluyen cifrado avanzado integrado y protección de datos, una sólida seguridad de red y sistema y medidas de seguridad inteligentes frente a amenazas.

Algunas medidas de seguridad son las siguientes:

<table class="default">
<tr>
<th>Arranque seguro y arranque de confianza	</th>
<td>Ayudan a evitar que el malware y los componentes dañados se carguen cuando se inicia un dispositivo Windows.</td>
</tr>
<th>Criptografía y administración de certificados	</th>
<td>Usa código para convertir datos de modo que solo un destinatario especifico pueda leerlos mediante una clave.
La criptografía exige privacidad para impedir que cualquier persona excepto el destinatario previsto lea datos.</td>
</tr>
<th>Unidad de disco duro-cifrado</th>
<td>Usa el cifrado rápido que proporciona el cifrado de unidad BitLocker para mejorar la seguridad y la administración de los datos.</td>
</tr>
<th>BitLocker	</th>
<td>Es una característica de protección de datos que se integra en el sistema operativo y soluciona las amenazas de robo o exposición de datos de equipos perdidos, sustraídos o retirados inadecuadamente.</td>
</tr>
<th>Red privada virtual	</th>
<td>Son conexiones de punto a punto en una red pública o privada, como Internet. Un cliente VPN usa protocolos especiales TCP/IP o basados en UDP, denominados protocolos de túnel, para realizar una llamada virtual a un puerto virtual en un servidor VPN.</td>
</tr>
<th>Firewall de Windows Defender		</th>
<td>Es un firewall de host con estado que ayuda a proteger el dispositivo, ya que permite crear reglas que determinan qué tráfico de red puede entrar en el dispositivo desde la red y qué tráfico de red puede enviar el dispositivo a la red.</td>
</tr>
<th>Protección & antivirus antimalware</th>
<td>Un antivirus funciona mediante la detección y eliminación de virus y otras amenazas de seguridad conocidas mediante el uso de firmas y bases de datos de malware.
Por otro lado, un antimalware es una herramienta de seguridad que se enfoca en la detección y eliminación de una amplia variedad de amenazas de seguridad, incluyendo virus, spyware, troyanos, adware y otros tipos de malware.</td>
</tr>
<th>Protección de red	 </th>
<td>Ayuda a evitar que los usuarios accedan a direcciones IP y dominios peligrosos que pueden hospedar estafas de suplantación de identidad (phishing), vulnerabilidades de seguridad y otro contenido malintencionado en Internet. </td>
</table>

<h2 align=center>Permisos y control de acceso de usuarios</h2>
Existen 2 roles para poder acceder al servicio de enlace de windows Admin Center:
<hr>
<h3 >USUARIOS DE PUERTA DE ENLACE:</h3>

Pueden conectarse al servicio de puerta de enlace de windows para administrar servidores mediante la puerta de enlace, pero no pueden cambiar los permisos de acceso.
<hr>
<h3 >ADMINISTRADORES DE PUERTA EDE ENLACE:</h3>

Pueden configurar quien obtiene acceso y como se autentican los usuarios en la puerta de enlace.
Control de acceso basado en roles
Permite proporcionar a los usuarios acceso limitado a la maquina en lugar de hacerles administradores locales completos.
El acceso a la puerta de enlace no implica el acceso a los servidores administrados visibles para la puerta de enlace. Para administrar un servidor de destino, el usuario que se conecta debe usar credenciales (ya sean las credenciales de paso a través de Windows o las credenciales proporcionadas en la sesión de Windows Admin Center mediante la acción Administrar como) con acceso administrativo al servidor de destino.

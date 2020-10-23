import java.io.*;
import java.net.InetAddress;

public class NetworkMgr 
{
	public static void main(String[] args) 
	{
		checkHosts("192.168.0");
	}

	static public void checkHosts(String subnet)
	{
	   int timeout=100;
	   for (int i=1;i<255;i++)
	   {
		   	String host=subnet + "." + i;
			try
			{
			if (InetAddress.getByName(host).isReachable(timeout))
			{
				System.out.println(host + " is reachable");
			}
			}
			catch(IOException e)
			{
				e.printStackTrace();
			}
	   }
	}
}

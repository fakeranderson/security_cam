import java.io.*;
import java.net.InetAddress;

public class NetworkMgr 
{
	public static void main(String[] args) 
	{
		checkHosts("192.168.68");
	}

	static public void checkHosts(String subnet)
	{
	   int timeout=100;
	   for (int i=1;i<255;i++)
	   {
		   	String host=subnet + "." + i;
			try
			{
        //System.out.println(host);
			if (InetAddress.getByName(host).isReachable(timeout))
			{
				System.out.println(host + " is reachable");
			}
			}
			catch(IOException e)
			{
        System.out.println("Failed");
				e.printStackTrace();
			}
	   }
	}
}
